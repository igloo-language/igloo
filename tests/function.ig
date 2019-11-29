func printd(text) {
    `print(self.objects[ID("text", 1)].debug())`;
}

func println(text) {
    `print(self.objects[ID("text", 1)].string())`;
}

printd("10");

println("10");

aiwdj();
