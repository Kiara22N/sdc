import 'package:flutter/material.dart';



void main() => runApp(MyApp());



class MyApp extends StatelessWidget {

  @override

  Widget build(BuildContext context) {

    return MaterialApp(

      home: CombinedWidget(),

    );

  }

}



class CombinedWidget extends StatelessWidget {

  @override

  Widget build(BuildContext context) {

    return Scaffold(

      appBar: AppBar(

        title: Text('Flutter Combined Example'),

      ),

      body: Center(

        child: Column(

          mainAxisAlignment: MainAxisAlignment.center,

          children: <Widget>[

            // Rotating Container

            Transform(

              transform: Matrix4.rotationZ(0.1),

              alignment: Alignment.center,

              child: Container(

                width: double.infinity,

                height: 150.0,

                color: const Color.fromARGB(255, 135, 215, 240),

                margin: EdgeInsets.all(25),

                padding: EdgeInsets.all(35),

                alignment: Alignment.center,

                child: Text(

                  "Hello! I am in the container widget!!",

                  style: TextStyle(fontSize: 25),

                  textAlign: TextAlign.center,

                ),

              ),

            ),

            // Smaller Image with Caption

            Padding(

              padding: const EdgeInsets.all(8.0), // Reduced padding

              child: Container(

                width: 200, // Specify a smaller width

                height: 100, // Specify a smaller height

                child: AspectRatio(

                  aspectRatio: 2 / 1, // Adjust to maintain a specific aspect ratio

                  child: Image.asset(

                    'assets/london.png', // Ensure this image exists

                    fit: BoxFit.contain,

                  ),

                ),

              ),

            ),

            Padding(

              padding: const EdgeInsets.all(8.0),

              child: Text(

                'London, thou art the flour of cities all',

                style: TextStyle(fontSize: 20.0),

                textAlign: TextAlign.center,

              ),

            ),

            // Simple Text Example

            Padding(

              padding: const EdgeInsets.all(16.0),

            ),

          ],

        ),

      ),
