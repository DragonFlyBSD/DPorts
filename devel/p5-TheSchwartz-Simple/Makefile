# Created by: Kurt Lidl <kurt.lidl@cello.com>
# $FreeBSD: devel/p5-TheSchwartz-Simple/Makefile 324174 2013-08-02 18:52:07Z mat $

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

MAN3=	TheSchwartz::Simple.3

.include <bsd.port.mk>
