BEGIN{
udppacket=0;
}
{
if($1=="r"&&$4=="4"&&$5=="cbr")
{
udppacket++;
}
END{
printf("\n total number of udp packets received at Node 4 due to Link state 
algorithm: %d\n", udppacket++);
}
