fun main() {
    // val trickFunction = trick
    // trick()
    // trickFunction()
    // treat()
    val coins:(Int)->String={
        a ->
        "$$a  quarters"
    }
    val cupcakes:(Int)->String={
        "cupacakes"
    }
    val treatFunction = trickOrTreat(false,coins)
    val trickFunction = trickOrTreat(true,cupcakes)
    val DirectLamda= trickOrTreat(true,{"$it quarters"})
    treatFunction()
    trickFunction()
    DirectLamda()

}


fun trickOrTreat(isTrick: Boolean, extraTreat: (Int) -> String):()->Unit{
    if(isTrick)
        return trick
    else{
        println(extraTreat(5))
        return treat
    }
}
val trick={
    println("No trick")
}
val treat: () -> Unit = {
    println("Have a treat!")
}
