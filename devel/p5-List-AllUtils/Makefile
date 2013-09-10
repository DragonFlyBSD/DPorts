# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: devel/p5-List-AllUtils/Makefile 326787 2013-09-09 09:45:12Z az $

PORTNAME=	List-AllUtils
PORTVERSION=	0.03
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Combines List::Util and List::MoreUtils in one bite-sized package

BUILD_DEPENDS=	p5-List-MoreUtils>=0.28:${PORTSDIR}/lang/p5-List-MoreUtils
RUN_DEPENDS=	p5-List-MoreUtils>=0.28:${PORTSDIR}/lang/p5-List-MoreUtils

USES=		perl5
USE_PERL5=	configure

MAN3=		List::AllUtils.3

.include <bsd.port.mk>
