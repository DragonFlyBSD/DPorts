# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: databases/p5-Class-DBI-Pager/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Class-DBI-Pager
PORTVERSION=	0.08
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Pager utility for Class::DBI

BUILD_DEPENDS:=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-DBI>=0:${PORTSDIR}/databases/p5-Class-DBI \
		p5-Exporter-Lite>=0:${PORTSDIR}/devel/p5-Exporter-Lite \
		p5-Data-Page>=0:${PORTSDIR}/databases/p5-Data-Page \
		p5-Clone>=0:${PORTSDIR}/devel/p5-Clone

USES=		perl5
USE_PERL5=	configure

MAN3=		Class::DBI::Pager.3

.include <bsd.port.mk>
