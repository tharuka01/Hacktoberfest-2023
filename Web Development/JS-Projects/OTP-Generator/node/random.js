var num = 4;
var nums = "0123456789";
var arr = new Array(nums.length).fill(0);


const randomOTP = () => {
    let res = "";
    for(let i=0;i<num;i++){
        let index = Math.floor(Math.random() * nums.length);
        if(i == 0 && index == 0){
            arr[0] = 1;
        }
        if(arr[index] != 1){
            res += nums[index];
            arr[index] = 1;
        }
        else{
            i--;
        }
    }
    console.log(arr);
    return res;
}


console.log(randomOTP());
