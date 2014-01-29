# Created by: Elisey Savateev <b3k@mail.ru>
# $FreeBSD: security/umit/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	umit
PORTVERSION=	1.0
PORTREVISION=	2
CATEGORIES=	security
MASTER_SITES=	SF
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ayu@commun.jp
COMMENT=	UMIT is the nmap frontend developed with Python and PyGTK

RUN_DEPENDS=	${LOCALBASE}/bin/nmap:${PORTSDIR}/security/nmap \
		${PYTHON_PKGNAMEPREFIX}sqlite3>0:${PORTSDIR}/databases/py-sqlite3

INSTALLS_ICONS=	yes
USE_BZIP2=	yes
USE_GNOME=	pygtk2
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

NO_STAGE=	yes

post-patch:
	${REINPLACE_CMD} \
		-e 's/self.build_html_doc()//' \
		-e 's,distutils\.command\.install ,setuptools\.command\.install ,' \
		${WRKSRC}/setup.py

.include <bsd.port.mk>
