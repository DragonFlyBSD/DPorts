# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: www/linklint/Makefile 317614 2013-05-07 14:27:41Z ehaupt $

PORTNAME=	linklint
DISTVERSION=	2.3.6.d
CATEGORIES=	www
MASTER_SITES=	http://www.linklint.org/download/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Perl script that checks links on web sites

USES=		shebangfix
USE_PERL5_RUN=	yes
NO_BUILD=	yes

SHEBANG_FILES=	${DISTNAME}

PLIST_FILES=	bin/linklint

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${DISTNAME} ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
