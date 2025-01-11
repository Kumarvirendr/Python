const express = require('express')
const bodyParser = require('body-parser')
const mongoose = require("mongoose")
const multer = require("multer")
const web = express()

web.use(express.static('public'))
web.set('views', __dirname + '/views')
web.set('view engine','ejs')
web.use(bodyParser.urlencoded({extended:true}))

const imageupload = multer.diskStorage({
    destination: 'public/categoryimages/',
    filename: (req,file,tempname)=>{
     tempname(null, file.originalname)
    }
})
const upload = multer({storage:imageupload})

mongoose.connect('mongodb://localhost:27017/dmart')

const pcategorySchema = new mongoose.Schema({
    category:String,
    subcategory:String,
    categoryimg: String,
    popularcategory: String,
})

const productcategory = mongoose.model('productcategory', pcategorySchema)

const adddetailsschema = new mongoose.Schema({
    productname:String,
    productbrand:String,
    productimage:String,
    quantity:String
})
const detailsreg = mongoose.model('detailsreg',adddetailsschema)

web.get('/navbar', async (req,res)=>{
    res.render('includes/navbar')
})

web.get('/', async (req,res)=>{
    const data = await productcategory.find({popularcategory:"Yes"})
    res.render('index', {data})
})
web.get('/productCategory', async (req,res)=>{
    res.render('admin/productCategory')
})
web.post('/pcategory',upload.single('categoryimg') ,async (req,res)=>{
    const {category, subcategory, popularcategory} = req.body
    const categoryimg = 'categoryimages/' + req.file.originalname
    const data = productcategory({
        category,
        subcategory,
        popularcategory,
        categoryimg,
    })
    await data.save()
    res.redirect('/productCategory')
    
})

web.post('/add-detail',upload.single('productimage'), async (req,res)=>{
    const {productname,productbrand,quantity} = req.body
    const productimage = '/categoryimages/' + req.file.originalname
    const data = await detailsreg({
    productname,
    productbrand,
    productimage,
    quantity
    })
    data.save()
    res.send("submitted")
} )

web.get('/products', async (req,res)=>{
    const data = await detailsreg.find()
    res.render('products', {data})
})

web.post('/product/:id', async (req,res)=>{
    const productid = req.params.id
    console.log(productid)
    const singledata = await detailsreg.findById(productid)
    res.render('details', {singledata})
})

web.listen(3000, ()=>{
    console.log("server created at port 3000")
})

// product


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <% data.forEach((key)=>{ %>
      <h3><%= key.productname %></h3> 

     <form action="/product/<%= key._id %>" method="post">
      <input type="hidden" name="id" value="<%= key._id %>">
      <button style="border: none;"><img src="<%= key.productimage %>" alt=""></button>
     </form>
    <% })%>
</body>
</html>



// home page 
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>D-Mart Ready</title>
    <link href="/styles/styles.css" rel="stylesheet">
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/swiper@11/swiper-bundle.min.css" />
    <style>
        /* Optional custom styling */
        .navbar {
            box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1);
        }
    </style>
</head>
<body class="bg-slate-100">
    <nav class="navbar bg-white text-gray-800 shadow-md">
        <div class="container mx-auto px-4 py-3 flex items-center justify-between">
            <!-- Logo -->
            <a href="#" class="text-xl font-semibold text-blue-600 flex items-center">
                <img src="https://cdn.dmart.in/images/icons/dmart_ready_logo.svg" alt="D-Mart Logo" class="h-8 mr-3">
                
            </a>

            <!-- Search Bar -->
            <div class="hidden md:flex flex-1 mx-8">
                <input type="text" placeholder="Search products..." class="w-full py-2 px-4 border border-gray-300 rounded-l-md focus:outline-none focus:ring-2 focus:ring-green-500">
                <button class="bg-green-600 text-white px-4 py-2 rounded-r-md hover:bg-blue-700 focus:outline-none focus:ring-2 focus:ring-blue-500">
                    Search
                </button>
            </div>

            <!-- Menu for larger screens -->
            <div class="hidden md:flex space-x-6">
                <a href="#" class="hover:text-blue-600">Home</a>
                <a href="#" class="hover:text-blue-600">Products</a>
                <a href="#" class="hover:text-blue-600">About Us</a>
                <a href="#" class="hover:text-blue-600">Contact</a>
            </div>

            <!-- Hamburger icon for mobile -->
            <button class="md:hidden text-2xl focus:outline-none">
                <svg class="w-6 h-6" fill="none" stroke="currentColor" viewBox="0 0 24 24" xmlns="http://www.w3.org/2000/svg">
                    <path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M4 6h16M4 12h16M4 18h16"></path>
                </svg>
            </button>
        </div>

        <!-- Mobile menu -->
        <div class="md:hidden">
            <div class="px-2 py-3 space-y-1">
                <a href="#" class="block text-gray-700 hover:bg-gray-200 px-3 py-2 rounded">Home</a>
                <a href="#" class="block text-gray-700 hover:bg-gray-200 px-3 py-2 rounded">Products</a>
                <a href="#" class="block text-gray-700 hover:bg-gray-200 px-3 py-2 rounded">About Us</a>
                <a href="#" class="block text-gray-700 hover:bg-gray-200 px-3 py-2 rounded">Contact</a>
            </div>
        </div>
    </nav>

    <div class="swiper mySwiper">
      <div class="swiper-wrapper">
        <div class="swiper-slide"><img src="
          https://www.dmart.in/_next/image?url=https%3A%2F%2Fcdn.dmart.in%2Fimages%2Frwd%2Fbanners%2Fhmpg%2F1may24-crsl-beautystore.jpg&w=2048&q=75%202048w" alt="" class="w-full"></div>
        <div class="swiper-slide"><img src="https://www.dmart.in/_next/image?url=https%3A%2F%2Fcdn.dmart.in%2Fimages%2Frwd%2Fbanners%2Fhmpg%2F1aug24-crsl-newarrival.jpg&w=3840&q=75 3840w" alt="" class="w-full"></div>
        <div class="swiper-slide"><img src="https://www.dmart.in/_next/image?url=https%3A%2F%2Fcdn.dmart.in%2Fimages%2Frwd%2Fbanners%2Fhmpg%2F1aug24-crsl-kitchenmela.jpg&w=3840&q=75 3840w" alt="" class="w-full"></div>
      </div>
      <div class="swiper-button-next"></div>
      <div class="swiper-button-prev"></div>
     
    </div>

<div class="m-5 bg-white p-2 rounded-sm">
 <div class="p-1">Popular Categories</div>
 <div class="flex p-4">
    <% data.forEach((key)=>{ %>
    <div class="m-3">
      <a href=""><img src="<%= key.categoryimg %>" alt="" class="w-24 rounded-md"></a>
      <h5 class="text-center"><%= key.category %></h5>
    </div>
    <%})%>
 </div>
</div>

    <script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.7.1/jquery.min.js" integrity="sha512-v2CJ7UaYy4JwqLDIrZUI/4hqeoQieOmAZNXBeQyjo21dadnwR+8ZaIJVT8EE2iyI61OV8e6M8PP2/4hpQINQ/g==" crossorigin="anonymous" referrerpolicy="no-referrer"></script>
    <script src="https://cdn.jsdelivr.net/npm/swiper@11/swiper-bundle.min.js"></script>
    <script>
       var swiper = new Swiper(".mySwiper", {
      slidesPerView: 1,
      spaceBetween: 30,
      loop: true,
      autoplay: {
          delay: 2500,
          disableOnInteraction: false,
        },

      navigation: {
        nextEl: ".swiper-button-next",
        prevEl: ".swiper-button-prev",
      },
    });

      
    </script>
</body>
</html>



// adddetails

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="/styles/styles.css">
</head>
<body class="bg-slate-600">
    <form action="/add-detail" method="post" enctype="multipart/form-data">
        <fieldset>
            <legend>Product Specification</legend>
            <label for="">Product Details</label>
            <input type="text" name="productname"><br>
            <input type="text" name="productbrand"><br>
            <input type="file" name="productimage">
            <label for="quantity">Choose a quantity</label>
            <select name="quantity">
            <option value="250gm">250gm</option>
            <option value="500gm">500gm</option>
            <option value="1kg">1kg</option>
            <option value="2kg">2kg</option>
            <option value="250ml">250ml</option>
            <option value="500ml">500ml</option>
            <option value="1litre">1litre</option>
            <option value="2litre">2litre</option>
            </select>
            <input type="submit" name="Submit">
        </fieldset>
    </form>
</body>
</html>


// product catogarty 

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <script src="https://cdn.tailwindcss.com"></script>
</head>
<body >
    <div class="h-screen bg-green-950 flex justify-center items-center">
    <form action="/pcategory" method="post" class="" enctype="multipart/form-data">
        <fieldset class="border border-gray-300 p-4 rounded-lg">
            <legend class="text-white ">Product Category</legend>
            <div class="m-1">
                <label for="productcategory" class="text-white">Category Name </label>
                <input type="text" name="category" class="rounded-lg focus: text-blue-600 p-1 w-full">
            </div>
            <div class="m-1">
                <label for="subcategory" class="text-white">Sub Category </label>
                <input type="text" name="subcategory" class="rounded-lg focus: text-blue-600 p-1 w-full">
            </div>
            <div class="m-1">
                <label for="popularcategory" class="text-white">Popular Category </label>
                <select name="popularcategory" id="" class="rounded-sm">
                    <option value="Yes">Yes</option>
                    <option value="No">No</option>
                </select>
            </div>
            <div class="m-1">
                <label for="categoryimage" class="text-white">Category Image </label>
                <input type="file" name="categoryimg" id="" class="rounded-lg focus: text-blue-600 p-1 w-full">
            </div>
            
            <div class="m-2">
                <input type="submit" name="Submit" id="" class="w-full bg-blue-600 text-white p-1 rounded-lg">
            </div>
            
        </fieldset>
    </form>
    </div>
</body>
</html>