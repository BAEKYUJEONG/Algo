//
//  Programmers.swift
//  Algorithm
//
//  Created by 백유정 on 2022/08/06.
//

import Foundation

final class programmers {
    
    /// 숫자 문자열과 영단어
    func solution_81301(_ s:String) -> Int {
        let arr = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
        var str = s
        for i in 0..<arr.count {
            str = str.replacingOccurrences(of: arr[i], with: String(i))
        }
        return Int(str)!
    }
    
    /// 음양 더하기
    func solution_76501(_ absolutes:[Int], _ signs:[Bool]) -> Int {
        var answer: Int = 0
        
        for i in 0..<signs.count {
            answer += (signs[i] == true) ? absolutes[i] : -absolutes[i]
        }
        return answer
    }
}
