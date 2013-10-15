# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: www/linklint/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	linklint
DISTVERSION=	2.3.6.d
CATEGORIES=	www
MASTER_SITES=	http://www.linklint.org/download/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Perl script that checks links on web sites

USES=		shebangfix perl5
USE_PERL5=	run
NO_BUILD=	yes

SHEBANG_FILES=	${DISTNAME}

PLIST_FILES=	bin/linklint

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${DISTNAME} ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
