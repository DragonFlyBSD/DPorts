PORTNAME=	pam_tacplus
PORTVERSION=	4.0
CATEGORIES=	security
MASTER_SITES=	https://avalon.dragonflybsd.org/misc/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	dports@ef.irc
COMMENT=	TACACS+ authentication PAM module

LICENSE=	BSD3CLAUSE

USES+=		localbase:ldflags

LIB_DEPENDS=	libtacplus.so.4:net/libtacplus

PLIST_FILES=	lib/pam_tacplus.so \
		man/man8/pam_tacplus.8.gz

# Only export these global pam symbols to avoid "issues"
CFLAGS+=	-fvisibility=hidden
PAMSYMBOLS=	pam_sm_authenticate pam_sm_setcred

post-patch:
	${REINPLACE_CMD} -e 's@PAM_EXTERN @__dso_public PAM_EXTERN @g' \
		${WRKSRC}/pam_tacplus.c
	${REINPLACE_CMD} -e "s@/etc/tacplus.conf@${LOCALBASE}&@g" \
                ${WRKSRC}/pam_tacplus.8

.include <bsd.port.mk>
