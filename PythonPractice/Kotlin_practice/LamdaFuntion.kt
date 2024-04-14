 fun trickOrTreat(isTrick: Boolean, extraTreat: (Int) -> String): () -> Unit {
     if (isTrick) {
         return trick
   } else {
        println(extraTreat(5))
        return treat
    }
}

// fun testFun(flag:Boolean, Func:(Int)->String):()->Unit{
//     if(flag){
//         return treat
//     }
//     else{
//         println(Func(5))
//         return trick
//     }
// }

// fun main(){
//     val Tf:(Int)->String={
//         quantity->"$quantity quarter"
//     }

//     val ins=testFun(false){"$it quarter"}//trailing lamda syntax
// }
// val trick={
//     println("trick")
// }
// val treat={
//     println("treat")
// }
    