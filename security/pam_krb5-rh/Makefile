# New ports collection makefile for:	pam_krb5
# Date created:				18 October 2011
# Whom:					Ryan Steinmetz <zi@FreeBSD.org>
#
# $FreeBSD: ports/security/pam_krb5-rh/Makefile,v 1.4 2012/12/15 03:37:53 svnexp Exp $
#

PORTNAME=	pam_krb5
DISTVERSION=	2.4.1
CATEGORIES=	security
MASTER_SITES=	https://fedorahosted.org/released/${PORTNAME}/ \
		http://mirrors.rit.edu/zi/
PKGNAMESUFFIX=	-rh

MAINTAINER=	zi@FreeBSD.org
COMMENT=	The Red Hat Pluggable Authentication Module for Kerberos 5

LICENSE=	LGPL21 BSD
LICENSE_COMB=	dual

CONFLICTS=	pam_krb5-4.*

USE_ICONV=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--with-libiconv-prefix=${LOCALBASE} --without-afs \
		--with-libintl-prefix=${LOCALBASE} --with-krb4=no \
		--without-keyutils
LDFLAGS+=	-L${LOCALBASE}/lib

MAN5=		pam_krb5.5
MAN8=		pam_krb5.8 pam_krb5_cchelper.8

.if defined(WITHOUT_NLS)
PLIST_SUB+=	NLS="@comment "
CONFIGURE_ARGS+=--disable-nls
.else
PLIST_SUB+=	NLS=""
LDFLAGS+=	-lintl
USE_GETTEXT=	yes
.endif

.include <bsd.port.pre.mk>

.if ${OSVERSION} < 800000
BROKEN=		does not build on FreeBSD 7.x
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|libdir)/security|libdir)|g' ${WRKSRC}/src/Makefile.in
	@${REINPLACE_CMD} -e 's|/lib64/security|${LOCALBASE}/lib|g' \
		${WRKSRC}/src/*.8
	@${REINPLACE_CMD} -e 's|-ldl||g' ${WRKSRC}/tests/tools/Makefile.in
	@${REINPLACE_CMD} -e 's|PAM_BAD_ITEM|PAM_SYMBOL_ERR|g' ${WRKSRC}/src/conv.c
	@${REINPLACE_CMD} -e 's|PAM_AUTHTOK_RECOVER_ERR|PAM_AUTHTOK_RECOVERY_ERR|g' \
		${WRKSRC}/src/password.c

.include <bsd.port.post.mk>
