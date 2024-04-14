package com.example.test

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.style.LineHeightStyle
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.test.ui.theme.TestTheme

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            TestTheme {
                // A surface container using the 'background' color from the theme
                Surface(
                    modifier = Modifier.fillMaxSize(),
                    color = MaterialTheme.colorScheme.background
                ) {
//                    Greeting("Android")
                }
            }
        }
    }
}

@Composable
fun Greeting(name: String,from:String, modifier: Modifier = Modifier) {

    Column(verticalArrangement = Arrangement.Center,
        modifier=modifier.padding(8.dp)){
        Text(
            text = "Happy Birthday $name!",
            //            modifier = modifier.padding(24.dp),
            fontSize = 100.sp,
            lineHeight = 116.sp,
            textAlign= TextAlign.Center
        )
        Text(
            text = from,
            fontSize = 36.sp,
            modifier=modifier.padding(16.dp)
                .align(alignment = Alignment.End)
        )
    }


}

@Preview(
    showBackground = true,
    showSystemUi=true,
    name="My Preview"
)
@Composable
fun GreetingPreview() {
    TestTheme {
        Greeting("Android","From Emma")
    }
}