# Created by: mat
# $FreeBSD: databases/p5-Class-DBI-FromCGI/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Class-DBI-FromCGI
PORTVERSION=	1.00
PORTREVISION=	1
CATEGORIES=	databases www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Update Class::DBI data using CGI::Untaint

BUILD_DEPENDS:=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-DBI>=0:${PORTSDIR}/databases/p5-Class-DBI \
		p5-CGI-Untaint>=0:${PORTSDIR}/www/p5-CGI-Untaint

USES=		perl5
USE_PERL5=	configure

MAN3=		Class::DBI::FromCGI.3

.include <bsd.port.mk>
