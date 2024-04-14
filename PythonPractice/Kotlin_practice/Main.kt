open class parent{
    constructor(name:String, id:Int){
        println("parent")
        pf()
    }
    open fun pf(){
        println("hello parent")
    }
}
class child:parent{
    constructor(name:String, reg:Int, bg:String):super(name,reg){
        println("child "+bg)
        pf()
    }
    override fun pf(){
        println("hello child")
    }
}
fun main(){
    val ins=child("rahul",47,"B+")
}
