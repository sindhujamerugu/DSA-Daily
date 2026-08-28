source_mac = "SRC"
dest_mac = "DST"
print(25075A0510)
print("----- CHARACTER COUNT METHOD -----")

raw_frames = ["ABC", "DE"]

print("Original Data:", raw_frames)

for frame in raw_frames:
    total_len = 1 + len(source_mac) + len(dest_mac) + len(frame)
    print("Frame Sent:", total_len, dest_mac, source_mac, frame)



print("\n----- CHARACTER STUFFING METHOD -----")

flag = "FLAG"
esc = "ESC"

payload = ["A", "FLAG", "B"]

stuffed = []

for item in payload:
    if item == flag:
        stuffed.append(esc)
    stuffed.append(item)

print("Original Data:", payload)
print("Stuffed Data:", stuffed)



print("\n----- BIT STUFFING METHOD -----")

bits = "011111101111110"

stuffed_bits = ""
count = 0

for bit in bits:
    stuffed_bits += bit

    if bit == '1':
        count += 1

        if count == 5:
            stuffed_bits += '0'
            count = 0
    else:
        count = 0

print("Original Bits :", bits)
print("Stuffed Bits  :", stuffed_bits)