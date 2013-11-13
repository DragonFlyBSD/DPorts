# Created by: Kurt Lidl <kurt.lidl@cello.com>
# $FreeBSD: devel/p5-TheSchwartz-Simple/Makefile 332245 2013-10-31 14:31:30Z vanilla $

PORTNAME=	TheSchwartz-Simple
PORTVERSION=	0.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MIYAGAWA
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DBI only job dispatcher for TheSchwartz

BUILD_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
