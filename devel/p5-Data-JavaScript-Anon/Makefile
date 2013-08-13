# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: devel/p5-Data-JavaScript-Anon/Makefile 324171 2013-08-02 18:21:05Z az $

PORTNAME=	Data-JavaScript-Anon
PORTVERSION=	1.03
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Data
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Dump big dumb Perl structs to anonymous JavaScript structs

RUN_DEPENDS=	p5-Class-Default>=1.51:${PORTSDIR}/devel/p5-Class-Default \
		p5-Params-Util>=0.01:${PORTSDIR}/devel/p5-Params-Util
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure
MAN3=	Data::JavaScript::Anon.3

.include <bsd.port.mk>
