# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: www/p5-Apache-DB/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Apache-DB
PORTVERSION=	0.14
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Debugging and profiling tools for mod_perl

RUN_DEPENDS=	${APACHE_PKGNAMEPREFIX}mod_perl2>=0:${PORTSDIR}/www/mod_perl2

USES=		perl5
USE_PERL5=	configure
USE_APACHE_RUN=	22+

MAN3=		Apache::DB.3 Apache::DProf.3 Apache::perl5db.3 \
		Apache::SmallProf.3

.include <bsd.port.mk>
