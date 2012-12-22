# New ports collection makefile for:	p5-Authen-Krb5
# Date created:				22 January 2001
# Whom:					ajk@iu.edu
#
# $FreeBSD: ports/security/p5-Authen-Krb5/Makefile,v 1.17 2012/11/17 06:01:10 svnexp Exp $
#

PORTNAME=	Authen-Krb5
PORTVERSION=	1.9
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	Krb5-${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for Kerberos 5

LIB_DEPENDS=	krb5.3:${PORTSDIR}/security/krb5

PERL_CONFIGURE=	yes

MAN3=		Authen::Krb5.3

post-patch:
	@${REINPLACE_CMD} -e 's,/usr,${LOCALBASE},g' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
