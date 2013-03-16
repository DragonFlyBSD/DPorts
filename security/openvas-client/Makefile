# New ports collection makefile for:	openvas-client
# Date created:		2008-04-27
# Whom:			Tomoyuki Sakurai <cherry@trombik.org>
#
# $FreeBSD: ports/security/openvas-client/Makefile,v 1.10 2012/11/17 06:01:09 svnexp Exp $
#

PORTNAME=	openvas-client
PORTVERSION=	2.0.4
PORTREVISION=	3
CATEGORIES=	security
MASTER_SITES=	http://wald.intevation.org/frs/download.php/595/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A GUI client for OpenVAS

MAN1=		OpenVAS-Client.1 openvasclient-mkcert.1

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	gtk20

.include "${.CURDIR}/../../security/openvas-libraries/Makefile.common"

.include <bsd.port.mk>
