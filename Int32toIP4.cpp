std::string uint32_to_ip(uint32_t ip)
{
   std::string ip4 = "";
    unsigned char *k = (unsigned char *)&ip;

    for (int i = 0; i < sizeof(ip); ++i)
    {
        ip4 = std::to_string((unsigned int)k[i]) + ip4;
        if (i < 3)
        {
            ip4 = "." + ip4;
        }
    }
    return ip4;
}
