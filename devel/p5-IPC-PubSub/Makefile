# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: devel/p5-IPC-PubSub/Makefile 338909 2014-01-06 17:28:12Z az $

PORTNAME=	IPC-PubSub
PORTVERSION=	0.29
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Interprocess Publish/Subscribe channels

BUILD_DEPENDS=	p5-DBM-Deep>=1:${PORTSDIR}/databases/p5-DBM-Deep \
		p5-Class-Accessor>0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-Data-UUID>0:${PORTSDIR}/devel/p5-Data-UUID
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
