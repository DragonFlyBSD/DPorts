# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: databases/p5-DBD-LDAP/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	DBD-LDAP
PORTVERSION=	0.20
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DBI interface for accessing LDAP servers

BUILD_DEPENDS=	p5-perl-ldap>=0:${PORTSDIR}/net/p5-perl-ldap \
		p5-DBI>=0:${PORTSDIR}/databases/p5-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		DBD::LDAP.3

.include <bsd.port.mk>
