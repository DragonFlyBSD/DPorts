# New ports collection makefile for:	Apache-DB
# Date created:	   11 August 2004
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/www/p5-Apache-DB/Makefile,v 1.21 2012/11/17 06:02:44 svnexp Exp $
#

PORTNAME=	Apache-DB
PORTVERSION=	0.14
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Debugging and profiling tools for mod_perl

RUN_DEPENDS=	${APACHE_PKGNAMEPREFIX}mod_perl2>=0:${PORTSDIR}/www/mod_perl2

MAKE_JOBS_SAFE=  yes

PERL_CONFIGURE=	yes
USE_APACHE_RUN=	22+

MAN3=		Apache::DB.3 Apache::DProf.3 Apache::perl5db.3 \
		Apache::SmallProf.3

.include <bsd.port.mk>
