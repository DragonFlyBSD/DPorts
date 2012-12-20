# Created by: Jui-Nan Lin <jnlin@csie.nctu.edu.tw>
# $FreeBSD: ports/security/pam_google_authenticator/Makefile,v 1.8 2012/11/17 06:01:14 svnexp Exp $

PORTNAME=	pam_google_authenticator
PORTVERSION=	20120831
CATEGORIES=	security
MASTER_SITES=	LOCAL/dumbbell
DISTNAME=	google-authenticator-${PORTVERSION}

MAINTAINER=	jnlin@csie.nctu.edu.tw
COMMENT=	PAM module for two-step authentication from Google

LICENSE=	AL2

USE_GMAKE=	yes

PLIST_FILES=	bin/google-authenticator lib/pam_google_authenticator.so

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/google-authenticator ${PREFIX}/bin/google-authenticator
	${INSTALL_LIB} ${WRKSRC}/pam_google_authenticator.so ${PREFIX}/lib/pam_google_authenticator.so

.include <bsd.port.mk>
