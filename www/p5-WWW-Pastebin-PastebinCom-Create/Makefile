# $FreeBSD: www/p5-WWW-Pastebin-PastebinCom-Create/Makefile 340789 2014-01-23 03:28:14Z sunpoet $

PORTNAME=	WWW-Pastebin-PastebinCom-Create
PORTVERSION=	1.003
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Paste to http://pastebin.com from Perl

LICENSE=	ART20

BUILD_DEPENDS=	p5-Moo>=1.004001:${PORTSDIR}/devel/p5-Moo \
		p5-WWW-Mechanize>=1.73:${PORTSDIR}/www/p5-WWW-Mechanize
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
