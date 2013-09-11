# Created by: Ralf Gebhart <gebhart@secnetix.de>
# $FreeBSD: devel/p5-Log-Dispatch-DBI/Makefile 326671 2013-09-07 17:58:27Z az $

PORTNAME=	Log-Dispatch-DBI
PORTVERSION=	0.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gebhart@secnetix.de
COMMENT=	A Log::Dispatch output class for logging to database via DBI interface

BUILD_DEPENDS=	p5-Log-Dispatch>=2.0:${PORTSDIR}/devel/p5-Log-Dispatch \
		p5-DBI>0:${PORTSDIR}/databases/p5-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS}

TEST_DEPENDS=	p5-DBD-CSV>0:${PORTSDIR}/databases/p5-DBD-CSV

USES=		perl5
USE_PERL5=	configure

MAN3=		Log::Dispatch::DBI.3

.include <bsd.port.mk>
