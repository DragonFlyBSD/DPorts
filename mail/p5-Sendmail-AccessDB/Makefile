# New ports collection makefile for:	p5-Sendmail-AccessDB
# Date created:				29 Jun 2005
# Whom:					Emanuel Haupt <ehaupt@critical.ch>
#
# $FreeBSD: ports/mail/p5-Sendmail-AccessDB/Makefile,v 1.11 2012/11/17 05:59:09 svnexp Exp $
#

PORTNAME=	Sendmail-AccessDB
PORTVERSION=	1.03
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Perl5 interface to the Sendmail access.db list

BUILD_DEPENDS=	p5-BerkeleyDB>=0:${PORTSDIR}/databases/p5-BerkeleyDB
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes
MAKE_JOBS_SAFE=	yes

MAN3=		Sendmail::AccessDB.3

.include <bsd.port.mk>
