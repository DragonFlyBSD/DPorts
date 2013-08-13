# Created by: Rod Taylor <ports@rbt.ca>
# $FreeBSD: databases/p5-Exception-Class-DBI/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Exception-Class-DBI
PORTVERSION=	1.01
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DBI Exception objects

RUN_DEPENDS=	p5-Exception-Class>=0:${PORTSDIR}/devel/p5-Exception-Class \
		p5-DBI>=0:${PORTSDIR}/databases/p5-DBI

LICENSE_COMB=	dual
LICENSE=	ART10 GPLv1

USES=		perl5
USE_PERL5=	modbuild

MAN3=		Exception::Class::DBI.3

.include <bsd.port.mk>
