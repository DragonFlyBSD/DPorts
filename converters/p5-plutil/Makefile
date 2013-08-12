# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: converters/p5-plutil/Makefile 324363 2013-08-07 20:25:31Z ehaupt $

PORTNAME=	plutil
PORTVERSION=	1.7
CATEGORIES=	converters perl5
MASTER_SITES=	CRITICAL
PKGNAMEPREFIX=	p5-

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Perl implementation of Mac OS X plutil

USES=		shebangfix perl5
USE_PERL5=	run
USE_XZ=		yes
NO_BUILD=	yes

SHEBANG_FILES=	${PORTNAME}.pl

PLIST_FILES=	bin/plutil.pl

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME}.pl ${PREFIX}/bin

.include <bsd.port.mk>
