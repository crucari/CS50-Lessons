function one(x){
    console.log(x + 2)
    return function(y){
        console.log(x + y);
    }}

    one(2)(3);

 //results are x=4, y=5
