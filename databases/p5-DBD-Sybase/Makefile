# New ports collection makefile for:    p5-DBD-Sybase
# Date created:				May 10th 2001
# Whom:	      				Sheldon Hearn <sheldonh@FreeBSD.org>
#
# $FreeBSD: ports/databases/p5-DBD-Sybase/Makefile,v 1.32 2012/11/17 05:55:14 svnexp Exp $
#

PORTNAME=	DBD-Sybase
PORTVERSION=	1.14
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A Sybase DBI driver for Perl 5

BUILD_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI
LIB_DEPENDS=	ct.4:${PORTSDIR}/databases/freetds
RUN_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI

CONFIGURE_ENV=	SYBASE=${LOCALBASE}
PERL_CONFIGURE=	yes
USE_GETTEXT=	yes

.if defined(BATCH)
CONFIGURE_ARGS=	< /dev/null
.endif

MAN3=		DBD::Sybase.3

.include <bsd.port.mk>
