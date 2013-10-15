# Created by: KOMATSU Shinichiro
# $FreeBSD: x11-fonts/mkbold/Makefile 327781 2013-09-20 23:51:14Z bapt $

PORTNAME=	mkbold
PORTVERSION=	1.0
PORTREVISION=	2
CATEGORIES=	x11-fonts
MASTER_SITES=	${MASTER_SITE_PORTS_JP}
EXTRACT_SUFX=	.bz2

MAINTAINER=	koma2@lovepeers.org
COMMENT=	Perl script to make BDF font bold

CONFLICTS=	mkbold-mkitalic-[0-9]*

PLIST_FILES=	bin/mkbold
USES=		shebangfix perl5
SHEBANG_FILES=	mkbold
EXTRACT_CMD=	${BZCAT}
EXTRACT_BEFORE_ARGS=	#
EXTRACT_AFTER_ARGS=	> ${WRKSRC}/mkbold
NO_WRKSUBDIR=	yes
NO_BUILD=	yes
USE_BZIP2=	yes

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/mkbold ${PREFIX}/bin

.include <bsd.port.mk>
