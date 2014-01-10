# Created by: Jin-Shan Tseng <tjs@cdpa.nsysu.edu.tw>
# $FreeBSD: devel/p5-Log-Report/Makefile 339224 2014-01-09 13:14:30Z az $

PORTNAME=	Log-Report
PORTVERSION=	0.99.4
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MARKOV
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/\.(.)$/\1/}

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Report a problem, pluggable handlers and language support

RUN_DEPENDS=	p5-Devel-GlobalDestruction>=0.09:${PORTSDIR}/devel/p5-Devel-GlobalDestruction

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
