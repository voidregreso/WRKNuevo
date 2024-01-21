import re
import sys

def convert_compiled_to_original(input_file, output_file):
    with open(input_file, 'r') as infile, open(output_file, 'w') as outfile:
        for line in infile:
            # 提取消息ID和内容
            match = re.match(r'0x[0-9A-Fa-f]+,\s+"(.+)"', line)
            if match:
                message_content = match.group(1)
                # 还原特殊字符
                message_content = message_content.replace(r'\r\n', '\n').strip('"')
                message_id = line.split(',')[0].strip()
                # 写入原始消息表格式
                outfile.write(f'MessageId={message_id}\nLanguage=English\n{message_content}\n.\n\n')

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python script.py <input_file> <output_file>")
    else:
        input_file = sys.argv[1]
        output_file = sys.argv[2]
        convert_compiled_to_original(input_file, output_file)
