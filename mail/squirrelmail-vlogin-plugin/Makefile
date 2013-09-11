# Created by: Matt Emmerton <matt@gsicomp.on.ca>
# $FreeBSD: mail/squirrelmail-vlogin-plugin/Makefile 326271 2013-09-04 12:28:16Z az $

PORTNAME=	vlogin
PORTVERSION=	3.10.2
CATEGORIES=	mail www
MASTER_SITES=	http://www.squirrelmail.org/plugins/
PKGNAMEPREFIX=	squirrelmail-
PKGNAMESUFFIX=	-plugin
DISTNAME=	${PORTNAME}-${PORTVERSION}-1.2.7
DIST_SUBDIR=	squirrelmail

MAINTAINER=	neil@darlow.co.uk
COMMENT=	Adds multi-site-hosting capabilities to SquirrelMail

USES=		perl5
USE_PERL5=	run
USE_SM_COMPAT=	yes

DOCSDIR=	${PREFIX}/share/doc/${PKGNAMEPREFIX}${PORTNAME}${PKGNAMESUFFIX}

.include "${.CURDIR}/../squirrelmail/bsd.squirrelmail.mk"

# We need to rearrange, install and cleanup documentation pre-install
# because bsd.squirrelmail.mk installs everything under ${WRKSRC}/${PORTNAME}.
pre-install::
.if !defined(NOPORTDOCS)
	cd ${WRKSRC}/${PORTNAME}/docs \
	&& ${RM} .htaccess index.php \
	&& ${MKDIR} ${DOCSDIR} \
	&& ${COPYTREE_SHARE} \* ${DOCSDIR} \
	&& cd ${WRKSRC}/${PORTNAME} \
	&& ${RM} -rf README docs
.else
	cd ${WRKSRC}/${PORTNAME} && ${RM} -rf README docs
.endif

.include <bsd.port.mk>
