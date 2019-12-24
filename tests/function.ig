func printd(text) {
    `print(self.objects[ID("text", 1)].debug())`;
}

func println(text) {
    `print(self.objects[ID("text", 1)].string())`;
}

func println(text) {
    `print(self.objects[ID("text", 1)].string())`;
}

func five() {
    5;;
}

printd("10");

println("10");

x = five();
println(x);
