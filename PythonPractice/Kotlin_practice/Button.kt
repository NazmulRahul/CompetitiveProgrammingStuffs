package com.example.lemonade

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.wrapContentSize
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.mutableStateListOf
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import com.example.lemonade.ui.theme.LemonadeTheme
import androidx.activity.compose.setContent
import androidx.compose.foundation.Image
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.wrapContentSize
import androidx.compose.material3.Button
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.getValue
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.unit.dp
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.graphics.Color

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            LemonadeTheme {
                // A surface container using the 'background' color from the theme
                Surface(
                    modifier = Modifier.fillMaxSize(),
                    color = MaterialTheme.colorScheme.background
                ) {
                    lemonadeMaker()
                }
            }
        }
    }
}

@Composable
fun lemonadeMaker(modifier : Modifier= Modifier
    .fillMaxSize()
    .wrapContentSize(Alignment.Center)) {

    var step by remember {
        mutableStateOf(1)
    }
    val imageResource= when(step){
        1->R.drawable.lemon_tree
        2->R.drawable.lemon_squeeze
        3->R.drawable.lemon_drink
        else->R.drawable.lemon_restart
    }
    val text=when(step){
        1-> stringResource(R.string.a)
        2-> stringResource(R.string.b)
        3-> stringResource(R.string.c)
        else-> stringResource(R.string.d)
    }
    var rand by remember{
        mutableStateOf(1)
    }
    rand=(2..4).random()
    Surface(
        modifier= Modifier.fillMaxSize(),color=MaterialTheme.colorScheme.onBackground
    ) {
            Column(modifier=modifier,
        horizontalAlignment= Alignment.CenterHorizontally
    ){

        Button(onClick = {if(step==2 && rand>0){rand-=1}
        else {
            step=step%4 +1
        }
        }
        ) {
            Image(painter = painterResource(id = imageResource) , contentDescription =step.toString() )
        }
        Spacer(modifier = Modifier.height(16.dp))
        Text(text)

        }
    }
}

@Preview(showBackground = true)
@Composable
fun appPrev(){
    lemonadeMaker()
}
