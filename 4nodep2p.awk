BEGIN {
ctcp = 0;
cudp = 0;
}
{
pkt = $5;
if(pkt == "cbr") { cudp++; }
if(pkt == "tcp") { ctcp++; }
} ki
END {
printf("\nNo of packets sent\nTcp : %d \n Udp : %d\n", ctcp, cudp);
}
