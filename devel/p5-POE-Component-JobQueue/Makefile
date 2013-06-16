# New ports collection makefile for:	POE-Component-JobQueue
# Date created:		10 Dec 2001
# Whom:			Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: devel/p5-POE-Component-JobQueue/Makefile 320493 2013-06-10 17:02:24Z mat $
#

PORTNAME=	POE-Component-JobQueue
PORTVERSION=	0.5710
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/0+$//}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE component to manage queues and worker pools

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		POE::Component::JobQueue.3

.include <bsd.port.mk>
