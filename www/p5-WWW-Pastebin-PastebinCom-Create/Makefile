# $FreeBSD: www/p5-WWW-Pastebin-PastebinCom-Create/Makefile 333137 2013-11-07 16:38:13Z vanilla $

PORTNAME=	WWW-Pastebin-PastebinCom-Create
PORTVERSION=	0.004
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Paste to http://pastebin.com from Perl

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
