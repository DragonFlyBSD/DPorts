# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: security/p5-Authen-TypeKey/Makefile 326998 2013-09-11 17:56:03Z az $

PORTNAME=	Authen-TypeKey
PORTVERSION=	0.05
PORTREVISION=	2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	TypeKey authentication verification

BUILD_DEPENDS=	p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1 \
		p5-Class-ErrorHandler>=0:${PORTSDIR}/devel/p5-Class-ErrorHandler \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Authen::TypeKey.3

.include <bsd.port.mk>
