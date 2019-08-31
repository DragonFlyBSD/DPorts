PORTNAME=	pam_ssh
PORTVERSION=	8.0
CATEGORIES=	security
MASTER_SITES=	https://avalon.dragonflybsd.org/misc/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	dports@ef.irc
COMMENT=	PAM module for authentication with SSH private key passphrase

LICENSE=	BSD3CLAUSE

USES=		ssl

CFLAGS+=	-I${OPENSSLINC}
LDFLAGS+=	-L${OPENSSLLIB} -lcrypto

SUB_FILES=	pkg-message

PLIST_FILES=	lib/pam_ssh.so \
		man/man8/pam_ssh.8.gz

# Only export these global pam symbols to avoid "issues"
CFLAGS+=	-fvisibility=hidden
PAMSYMBOLS=	pam_sm_authenticate pam_sm_setcred \
		pam_sm_open_session pam_sm_close_session

post-patch:
	${REINPLACE_CMD} -e 's@PAM_EXTERN @__dso_public PAM_EXTERN @g' \
		${WRKSRC}/pam_ssh.c

pre-configure:
	(cd ${WRKSRC} && ${CC} ${CFLAGS} select_config.c -o select_config && ./select_config)

.include <bsd.port.mk>
