# Created by: Cheng-Lung Sung <clsung@dragon2.net>
# $FreeBSD: www/p5-LWP-Authen-Wsse/Makefile 333112 2013-11-07 15:07:21Z vanilla $

PORTNAME=	LWP-Authen-Wsse
PORTVERSION=	0.05
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Library for enabling X-WSSE authentication in LWP

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
