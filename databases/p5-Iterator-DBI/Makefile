# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: databases/p5-Iterator-DBI/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	Iterator-DBI
PORTVERSION=	0.02
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An iterator for returning DBI query results

BUILD_DEPENDS=	p5-Iterator>=0:${PORTSDIR}/devel/p5-Iterator
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Iterator::DBI.3

USES=		perl5
USE_PERL5=	configure

NO_STAGE=	yes
.include <bsd.port.mk>
