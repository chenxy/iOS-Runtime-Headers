/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface WebUserContentURLPatternPrivate : NSObject 
{

  /* Error parsing encoded ivar type info: {UserContentURLPattern="m_invalid"B"m_scheme"{String="m_impl"{RefPtr<WebCore::StringImpl>="m_ptr"^{StringImpl}}}"m_host"{String="m_impl"{RefPtr<WebCore::StringImpl>="m_ptr"^{StringImpl}}}"m_path"{String="m_impl"{RefPtr<WebCore::StringImpl>="m_ptr"^{StringImpl}}}"m_matchSubdomains"B} */
    struct UserContentURLPattern { 
        /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*m_invalid; 
        struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_scheme; 
        struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_host; 
        struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_path; 
        void*m_matchSubdomains; 
    } pattern;

}


- (id).cxx_construct;
- (void).cxx_destruct;

@end