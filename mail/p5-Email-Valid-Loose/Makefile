# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: mail/p5-Email-Valid-Loose/Makefile 327742 2013-09-20 19:59:12Z bapt $

PORTNAME=	Email-Valid-Loose
PORTVERSION=	0.05
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	A variation of Email::Valid which allows dot before at mark

BUILD_DEPENDS=	p5-Email-Valid>=0:${PORTSDIR}/mail/p5-Email-Valid
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Email::Valid::Loose.3

NO_STAGE=	yes
.include <bsd.port.mk>
