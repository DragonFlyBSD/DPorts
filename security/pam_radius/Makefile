PORTNAME=	pam_radius
PORTVERSION=	4.0
CATEGORIES=	security
MASTER_SITES=	https://avalon.dragonflybsd.org/misc/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	dports@ef.irc
COMMENT=	TACACS+ authentication PAM module

LICENSE=	BSD3CLAUSE

USES+=		localbase:ldflags

LIB_DEPENDS=	libradius.so.4:net/libradius

PLIST_FILES=	lib/pam_radius.so \
		man/man8/pam_radius.8.gz

# Only export these global pam symbols to avoid "issues"
CFLAGS+=	-fvisibility=hidden
PAMSYMBOLS=	pam_sm_authenticate pam_sm_setcred

post-patch:
	${REINPLACE_CMD} -e 's@PAM_EXTERN @__dso_public PAM_EXTERN @g' \
		${WRKSRC}/pam_radius.c
	${REINPLACE_CMD} -e "s@/etc/radius.conf@${LOCALBASE}&@g" \
                ${WRKSRC}/pam_radius.8

.include <bsd.port.mk>
