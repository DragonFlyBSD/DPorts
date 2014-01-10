# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: mail/p5-Email-Valid-Loose/Makefile 338799 2014-01-05 16:55:04Z az $

PORTNAME=	Email-Valid-Loose
PORTVERSION=	0.05
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Variation of Email::Valid which allows dot before at mark

BUILD_DEPENDS=	p5-Email-Valid>=0:${PORTSDIR}/mail/p5-Email-Valid
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
